#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_GET_NATIVEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1E886680)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_GET_NATIVEHEADER_OFFSET UNITYSDK_OFFSET(0x1E8866A0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1E886690)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEHEADER_OFFSET UNITYSDK_OFFSET(0x1E8866B0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8866C0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsicRemapAttribute_TypeDefinitionIndex = 6954;

	class Il2CppIntrinsicRemapAttribute : public ::System::Attribute
	{
	public:
		::System::String* _NativeFunction_k__BackingField; // 0x10
		::System::String* _NativeHeader_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* nativeFunction, ::System::String* nativeHeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE__CTOR_OFFSET))(this, nativeFunction, nativeHeader);
		}

		::System::String* get_NativeFunction()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_GET_NATIVEFUNCTION_OFFSET))(this);
		}

		::System::Void set_NativeFunction(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEFUNCTION_OFFSET))(this, value);
		}

		::System::String* get_NativeHeader()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_GET_NATIVEHEADER_OFFSET))(this);
		}

		::System::Void set_NativeHeader(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEHEADER_OFFSET))(this, value);
		}
	};
}
