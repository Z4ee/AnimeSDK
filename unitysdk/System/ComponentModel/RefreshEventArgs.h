#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_COMPONENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1A2400E0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_TYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1A2400F0)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A240080)
#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A240000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventArgs_TypeDefinitionIndex = 2975;

	class RefreshEventArgs : public ::System::EventArgs
	{
	public:
		::System::Type* typeChanged; // 0x10
		::System::Object* componentChanged; // 0x18

		::System::Void _ctor(::System::Object* componentChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_OFFSET))(this, componentChanged);
		}

		::System::Void _ctor_1(::System::Type* typeChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_1_OFFSET))(this, typeChanged);
		}

		::System::Object* get_ComponentChanged()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_COMPONENTCHANGED_OFFSET))(this);
		}

		::System::Type* get_TypeChanged()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS_GET_TYPECHANGED_OFFSET))(this);
		}
	};
}
