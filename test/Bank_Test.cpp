#Mosk test (make a test class)
TEST(BankTest, AddUserThrowsNotImplemented)
{
    Bank bank;
    User user("Ethan", "12345");

    EXPECT_THROW(bank.AddUser(user), const char*);
}
