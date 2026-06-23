#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UNITYSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E890070)
#define UNITYENGINE_UNITYSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8900C0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityString_TypeDefinitionIndex = 5038;

	class UnityString : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSTRING__CTOR_OFFSET))(this);
		}

		static ::System::String* Format(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSTRING_FORMAT_OFFSET))(fmt, args);
		}
	};
}
