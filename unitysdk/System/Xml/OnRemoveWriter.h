#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class XmlRawWriter; }

#define SYSTEM_XML_ONREMOVEWRITER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18576330)
#define SYSTEM_XML_ONREMOVEWRITER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18576360)
#define SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18575DE0)
#define SYSTEM_XML_ONREMOVEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18575DC0)

namespace System::Xml
{
	inline static constexpr unsigned int OnRemoveWriter_TypeDefinitionIndex = 1803;

	class OnRemoveWriter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::XmlRawWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET))(this, writer);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::XmlRawWriter* writer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::XmlRawWriter*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_BEGININVOKE_OFFSET))(this, writer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
