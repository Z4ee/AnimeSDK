#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48CC00)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppEagerStaticClassConstructionAttribute_TypeDefinitionIndex = 5078;

	class Il2CppEagerStaticClassConstructionAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPEAGERSTATICCLASSCONSTRUCTIONATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
