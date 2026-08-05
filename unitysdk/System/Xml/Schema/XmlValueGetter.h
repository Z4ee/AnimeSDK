#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D566E30)
#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D566E60)
#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D566BA0)
#define SYSTEM_XML_SCHEMA_XMLVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D566B80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlValueGetter_TypeDefinitionIndex = 2198;

	class XmlValueGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLVALUEGETTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
