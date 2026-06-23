#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Schema { class XsdBuilder; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DC48CE0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DC48D20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DC48760)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC48740)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_XsdInitFunction_TypeDefinitionIndex = 2222;

	class XsdBuilder_XsdInitFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_INVOKE_OFFSET))(this, builder, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XsdBuilder*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_BEGININVOKE_OFFSET))(this, builder, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDINITFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
