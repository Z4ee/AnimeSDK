#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B276C30)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEHEADER_OFFSET UNITYSDK_OFFSET(0x1B276C40)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B276C50)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppIntrinsicRemapAttribute_TypeDefinitionIndex = 3959;

	class Il2CppIntrinsicRemapAttribute : public ::System::Attribute
	{
	public:
		::System::String* _NativeFunction_k__BackingField; // 0x10
		::System::String* _NativeHeader_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_NativeFunction(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEFUNCTION_OFFSET))(this, a1);
		}

		::System::Void set_NativeHeader(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPINTRINSICREMAPATTRIBUTE_SET_NATIVEHEADER_OFFSET))(this, a1);
		}
	};
}
