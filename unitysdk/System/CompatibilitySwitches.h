#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int CompatibilitySwitches_TypeDefinitionIndex = 357;

	class CompatibilitySwitches : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsAppEarlierThanWindowsPhone8()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompatibilitySwitches_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::System::Boolean* StaticGet_IsAppEarlierThanSilverlight4()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CompatibilitySwitches_TypeDefinitionIndex)->GetStaticField(0x51);
		}
	};
}
