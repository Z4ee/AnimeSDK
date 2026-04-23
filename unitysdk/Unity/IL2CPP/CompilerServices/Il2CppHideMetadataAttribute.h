#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Il2CppHideMetadataTypes.h"

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4239D0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppHideMetadataAttribute_TypeDefinitionIndex = 3784;

	class Il2CppHideMetadataAttribute : public ::System::Attribute
	{
	public:
		::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes _Types_k__BackingField; // 0x10

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes types)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Il2CppHideMetadataTypes))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPHIDEMETADATAATTRIBUTE__CTOR_OFFSET))(this, types);
		}
	};
}
