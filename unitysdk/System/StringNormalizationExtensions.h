#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/NormalizationForm.h"

namespace System { class String; }

#define SYSTEM_STRINGNORMALIZATIONEXTENSIONS_ISNORMALIZED_1_OFFSET UNITYSDK_OFFSET(0x1D6CAE40)
#define SYSTEM_STRINGNORMALIZATIONEXTENSIONS_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1D6CAE00)
#define SYSTEM_STRINGNORMALIZATIONEXTENSIONS_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1D6CAEC0)
#define SYSTEM_STRINGNORMALIZATIONEXTENSIONS_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1D6CAE80)

namespace System
{
	inline static constexpr unsigned int StringNormalizationExtensions_TypeDefinitionIndex = 4100;

	class StringNormalizationExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNormalized(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGNORMALIZATIONEXTENSIONS_ISNORMALIZED_OFFSET))(value);
		}

		static ::System::Boolean IsNormalized_1(::System::String* value, ::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRINGNORMALIZATIONEXTENSIONS_ISNORMALIZED_1_OFFSET))(value, normalizationForm);
		}

		static ::System::String* Normalize(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STRINGNORMALIZATIONEXTENSIONS_NORMALIZE_OFFSET))(value);
		}

		static ::System::String* Normalize_1(::System::String* value, ::System::Text::NormalizationForm normalizationForm)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::NormalizationForm))((::PBYTE)hIl2Cpp + SYSTEM_STRINGNORMALIZATIONEXTENSIONS_NORMALIZE_1_OFFSET))(value, normalizationForm);
		}
	};
}
