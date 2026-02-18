#include <iostream>

class MegaAnnounce {
	public:
		std::string mes;
		void toCap() {
			int	i = 0;
			while (i < strlen(this.mes))
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
	while (i < argc)
	{
		announcement.mes += argv[i];
		if (i != argc - 1)
			announcement.mes += " ";
		i++;
	}

	std::cout << announcement.mes << "\n";
	return 0;
}