#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class ValidationEventArgs; }

#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE3B000)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE3B040)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE3AA70)
#define SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3AA50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationEventHandler_TypeDefinitionIndex = 2095;

	class ValidationEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
