#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE_GET_NATIVETYPE_OFFSET UNITYSDK_OFFSET(0x1FC65900)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE_SET_NATIVETYPE_OFFSET UNITYSDK_OFFSET(0x1FC65910)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC65920)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsicCastTypeAttribute_TypeDefinitionIndex = 6960;

	class Il2CppIntrinsicCastTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _NativeType_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* nativeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE__CTOR_OFFSET))(this, nativeType);
		}

		::System::String* get_NativeType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE_GET_NATIVETYPE_OFFSET))(this);
		}

		::System::Void set_NativeType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICCASTTYPEATTRIBUTE_SET_NATIVETYPE_OFFSET))(this, value);
		}
	};
}
