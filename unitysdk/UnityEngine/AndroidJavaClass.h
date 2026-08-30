#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AndroidJavaObject.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET UNITYSDK_OFFSET(0x1ECE71F0)
#define UNITYENGINE_ANDROIDJAVACLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECE7470)
#define UNITYENGINE_ANDROIDJAVACLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECE71D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaClass_TypeDefinitionIndex = 5674;

	class AndroidJavaClass : public ::UnityEngine::AndroidJavaObject
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _AndroidJavaClass(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVACLASS__ANDROIDJAVACLASS_OFFSET))(this, a1);
		}
	};
}
