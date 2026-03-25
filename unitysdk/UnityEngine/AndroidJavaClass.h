#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AndroidJavaObject.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET UNITYSDK_OFFSET(0x189CC6D0)
#define UNITYENGINE_ANDROIDJAVACLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189CC9A0)
#define UNITYENGINE_ANDROIDJAVACLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x189CC6B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaClass_TypeDefinitionIndex = 5392;

	class AndroidJavaClass : public ::UnityEngine::AndroidJavaObject
	{
	public:
		::System::Void _ctor(::System::String* className)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__CTOR_OFFSET))(this, className);
		}

		::System::Void _ctor_1(::System::IntPtr jclass)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__CTOR_1_OFFSET))(this, jclass);
		}

		::System::Void _AndroidJavaClass(::System::String* className)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET))(this, className);
		}
	};
}
