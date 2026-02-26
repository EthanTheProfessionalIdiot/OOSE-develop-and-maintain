#include "gtest/gtest.h"
#include "Statement.h"
#include "Account.h"

// ----------------------------
// Test Fixture
// ----------------------------
class StatementTest : public ::testing::Test
{
protected:
    Statement stmt;

    void SetUp() override
    {
        stmt.setContent("Initial Content");
    }
};

// ----------------------------
// Tests
// ----------------------------

TEST_F(StatementTest, DefaultContentIsEmpty)
{
    Statement newStmt;
    EXPECT_EQ(newStmt.getContent(), "");
}

TEST_F(StatementTest, SetAndGetContentWorks)
{
    stmt.setContent("Test Statement");
    EXPECT_EQ(stmt.getContent(), "Test Statement");
}

TEST_F(StatementTest, GenerateCreatesContentOfCorrectLength)
{
    stmt.generate(10);
    EXPECT_EQ(stmt.getContent().length(), 10);
}

TEST_F(StatementTest, GenerateWithZeroClearsContent)
{
    stmt.generate(0);
    EXPECT_EQ(stmt.getContent(), "");
}

TEST_F(StatementTest, SetAndGetDestinationDoesNotThrow)
{
    Account account;   // Stub Account
    stmt.setDestination(&account);  // Pass pointer

    // Check that getDestination() returns the same pointer
    Account* dest = stmt.getDestination();
    EXPECT_EQ(dest, &account);
}
