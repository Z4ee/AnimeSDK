#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Serialization { class UnreferencedObjectEventArgs; }

#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E83AC50)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E83AC90)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E83AC40)
#define SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83AB50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int UnreferencedObjectEventHandler_TypeDefinitionIndex = 1987;

	class UnreferencedObjectEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Xml::Serialization::UnreferencedObjectEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Xml::Serialization::UnreferencedObjectEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::UnreferencedObjectEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_UNREFERENCEDOBJECTEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
