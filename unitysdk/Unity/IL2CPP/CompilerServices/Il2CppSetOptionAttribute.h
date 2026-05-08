#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Option.h"

namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET UNITYSDK_OFFSET(0x1C5572B0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C5572D0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x1C5572C0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C5572E0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5572F0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppSetOptionAttribute_TypeDefinitionIndex = 6828;

	class Il2CppSetOptionAttribute : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::Unity::IL2CPP::CompilerServices::Option _Option_k__BackingField; // 0x18

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Option option, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE__CTOR_OFFSET))(this, option, value);
		}

		::Unity::IL2CPP::CompilerServices::Option get_Option()
		{
			return ((::Unity::IL2CPP::CompilerServices::Option(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_GET_OPTION_OFFSET))(this);
		}

		::System::Void set_Option(::Unity::IL2CPP::CompilerServices::Option value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_SET_OPTION_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_SET_VALUE_OFFSET))(this, value);
		}
	};
}
