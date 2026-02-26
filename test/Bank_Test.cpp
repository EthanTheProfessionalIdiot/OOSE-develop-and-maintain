#include "gtest/gtest.h"
#include "Bank.h"
#include "User.h"

class BankTest : public ::testing::Test
{
protected:
    Bank bank;

    User CreateTestUser()
    {
        return User("Ethan", "12345");
    }
};

TEST_F(BankTest, AddUserIncreasesUserCount)
{
    User user = CreateTestUser();

    bank.AddUser(user);

    EXPECT_EQ(bank.GetUserCount(), 1);
}

TEST_F(BankTest, AddMultipleUsers)
{
    bank.AddUser(User("Ethan", "123"));
    bank.AddUser(User("Alice", "456"));

    EXPECT_EQ(bank.GetUserCount(), 2);
}
