#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x185C5E20)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventArgs_TypeDefinitionIndex = 1976;

	class UnreferencedObjectEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* o; // 0x10
		::System::String* id; // 0x18

		::System::Void _ctor(::System::Object* o, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS__CTOR_OFFSET))(this, o, id);
		}
	};
}
