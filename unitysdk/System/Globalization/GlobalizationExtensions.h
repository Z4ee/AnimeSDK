#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/Object.h"

namespace System { class StringComparer; }
namespace System::Globalization { class CompareInfo; }

#define SYSTEM_GLOBALIZATION_GLOBALIZATIONEXTENSIONS_GETSTRINGCOMPARER_OFFSET UNITYSDK_OFFSET(0x1BE18840)

namespace System::Globalization
{
	inline static constexpr unsigned int GlobalizationExtensions_TypeDefinitionIndex = 1629;

	class GlobalizationExtensions : public ::System::Object
	{
	public:
		static ::System::StringComparer* GetStringComparer(::System::Globalization::CompareInfo* compareInfo, ::System::Globalization::CompareOptions options)
		{
			return ((::System::StringComparer*(*)(::System::Globalization::CompareInfo*, ::System::Globalization::CompareOptions))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_GLOBALIZATIONEXTENSIONS_GETSTRINGCOMPARER_OFFSET))(compareInfo, options);
		}
	};
}
