#include "HTMLConverter.h"

std::string HTMLConverter::convert(std::string& textToConvert)
{
	return "<html>\n\t<body>\n\t\t" + textToConvert + "\n\t</body>\n</html>";
}
