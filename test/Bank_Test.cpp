#include "gtest/gtest.h"
#include "Bank.h"
#include "User.h"

class BankTest : public ::testing::Test
{
protected:
    Bank bank;

    User CreateTestUser(std::string name = "Ethan", std::string id = "12345")
    {
        return User(name, id);
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
    bank.AddUser(CreateTestUser("Ethan", "123"));
    bank.AddUser(CreateTestUser("Alice", "456"));
    EXPECT_EQ(bank.GetUserCount(), 2);
}

TEST_F(BankTest, GetUsersReturnsCorrectUsers)
{
    bank.AddUser(CreateTestUser("Ethan", "123"));
    bank.AddUser(CreateTestUser("Alice", "456"));

    std::vector<User> users = bank.getUsers();
    ASSERT_EQ(users.size(), 2);

    EXPECT_EQ(users[0].getName(), "Ethan");   // Now valid
    EXPECT_EQ(users[1].getName(), "Alice");
}
