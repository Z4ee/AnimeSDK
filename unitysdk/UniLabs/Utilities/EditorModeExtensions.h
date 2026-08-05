#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UniLabs/Utilities/EditorMode.h"

#define UNILABS_UTILITIES_EDITORMODEEXTENSIONS_HASFLAGFAST_OFFSET UNITYSDK_OFFSET(0x1FBBB2C0)

namespace UniLabs::Utilities
{
	inline static constexpr unsigned int EditorModeExtensions_TypeDefinitionIndex = 95326;

	class EditorModeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean HasFlagFast(::UniLabs::Utilities::EditorMode value, ::UniLabs::Utilities::EditorMode flag)
		{
			return ((::System::Boolean(*)(::UniLabs::Utilities::EditorMode, ::UniLabs::Utilities::EditorMode))((::PBYTE)hIl2Cpp + UNILABS_UTILITIES_EDITORMODEEXTENSIONS_HASFLAGFAST_OFFSET))(value, flag);
		}
	};
}
