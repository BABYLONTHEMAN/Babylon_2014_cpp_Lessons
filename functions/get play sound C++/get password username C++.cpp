string username;
string password;
cout << "Enter your username: " << "\n";
getline( cin, username, '\n' );
cout << "Enter your password: " << "\n";
getline( cin, password, '\n' );
if ( username == "root" && password == "xyzzy" )
{
cout << "Access allowed" << "\n";
}