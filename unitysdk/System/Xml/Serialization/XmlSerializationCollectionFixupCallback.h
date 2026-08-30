#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E84B190)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E84B1D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E84B180)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84B090)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationCollectionFixupCallback_TypeDefinitionIndex = 2023;

	class XmlSerializationCollectionFixupCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONCOLLECTIONFIXUPCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
