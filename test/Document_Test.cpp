#include "gtest/gtest.h"
#include "Document.h"
#include "Account.h"

// ----------------------------
// Stub Test Fixture
// ----------------------------
class DocumentTest : public ::testing::Test
{
protected:
    Document doc;

    void SetUp() override
    {
        // Runs before each test
        doc.setContent("This is a test document.");
        doc.setPageCount(1);
    }

    void TearDown() override
    {
        // Runs after each test (not required here)
    }
};

// ----------------------------
// Tests
// ----------------------------

TEST_F(DocumentTest, DefaultPageCountIsZero)
{
    Document newDoc;
    EXPECT_EQ(newDoc.getPageCount(), 0);
}

TEST_F(DocumentTest, SetAndGetContentWorks)
{
    doc.setContent("Hello World");
    EXPECT_EQ(doc.getContent(), "Hello World");
}

TEST_F(DocumentTest, SetAndGetPageCountWorks)
{
    doc.setPageCount(5);
    EXPECT_EQ(doc.getPageCount(), 5);
}

TEST_F(DocumentTest, SetAndGetRecipientWorks)
{
    Account account;   // Stub usage (minimal)
    doc.setRecipient(account);

    EXPECT_NO_THROW(doc.getRecipient());
}

TEST_F(DocumentTest, GenerateUpdatesPageCount)
{
    doc.setContent("This is a long test string used to simulate content generation.");
    doc.Generate();

    EXPECT_GT(doc.getPageCount(), 0);
}
