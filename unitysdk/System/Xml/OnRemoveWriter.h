#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml { class XmlRawWriter; }

#define SYSTEM_XML_ONREMOVEWRITER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DD090)
#define SYSTEM_XML_ONREMOVEWRITER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DD0C0)
#define SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7DD080)
#define SYSTEM_XML_ONREMOVEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCF90)

namespace System::Xml
{
	inline static constexpr unsigned int OnRemoveWriter_TypeDefinitionIndex = 1815;

	class OnRemoveWriter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Xml::XmlRawWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::XmlRawWriter* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::XmlRawWriter*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_ONREMOVEWRITER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
