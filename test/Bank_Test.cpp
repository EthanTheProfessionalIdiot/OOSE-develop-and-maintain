#include "gtest/gtest.h"
#include "Bank.h"
#include "User.h"

// ----------------------------
// Test Fixture (Mock Style)
// ----------------------------
class BankTest : public ::testing::Test
{
protected:
    Bank bank;

    User CreateTestUser()
    {
        return User("Ethan", "12345");
    }
};

// ----------------------------
// Tests
// ----------------------------

TEST_F(BankTest, AddUserThrowsNotImplemented)
{
    User user = CreateTestUser();

    EXPECT_THROW(bank.AddUser(user), const char*);
}
