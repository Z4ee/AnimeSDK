#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/NAPOption.h"

namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET UNITYSDK_OFFSET(0x1B48C5A0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B48C5C0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x1B48C5B0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B48C5D0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48C5E0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppNAPSetOptionAttribute_TypeDefinitionIndex = 18231;

	class Il2CppNAPSetOptionAttribute : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::Unity::IL2CPP::CompilerServices::NAPOption _Option_k__BackingField; // 0x18

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::NAPOption option, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::NAPOption, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE__CTOR_OFFSET))(this, option, value);
		}

		::Unity::IL2CPP::CompilerServices::NAPOption get_Option()
		{
			return ((::Unity::IL2CPP::CompilerServices::NAPOption(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET))(this);
		}

		::System::Void set_Option(::Unity::IL2CPP::CompilerServices::NAPOption value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::NAPOption))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPNAPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}
	};
}
