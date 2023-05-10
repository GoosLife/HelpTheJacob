#include "HTMLConverter.h"

void HTMLConverter::convert(std::string& textToConvert)
{
	textToConvert = "<html>\n\t<body>\n\t\t" + textToConvert + "\n\t</body>\n</html>";
}