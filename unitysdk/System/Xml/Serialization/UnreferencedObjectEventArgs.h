#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F070C70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventArgs_TypeDefinitionIndex = 1860;

	class UnreferencedObjectEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* id; // 0x10
		::System::Object* o; // 0x18

		::System::Void _ctor(::System::Object* o, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTARGS__CTOR_OFFSET))(this, o, id);
		}
	};
}
