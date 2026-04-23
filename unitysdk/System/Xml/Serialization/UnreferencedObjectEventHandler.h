#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class UnreferencedObjectEventArgs; }

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0010F0)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A001130)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A000B70)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A000B50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventHandler_TypeDefinitionIndex = 1976;

	class UnreferencedObjectEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::Serialization::UnreferencedObjectEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::Serialization::UnreferencedObjectEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
