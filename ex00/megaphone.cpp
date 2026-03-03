#include <iostream>

class MegaAnnounce {
	public:
		std::string mes;
		void toCap() {
			std::string::size_type	i = 0;
			while (i < mes.length())
			{
				mes[i] = toupper(mes[i]);
				i++;
			}
		}
};

int	main(int argc, char *argv[])
{
	int	i = 1;

	MegaAnnounce announcement; 
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return 0;
	}
	while (i < argc)
	{
		announcement.mes += argv[i];
		i++;
	}
	announcement.toCap();
	std::cout << announcement.mes << "\n";
	return 0;
}
