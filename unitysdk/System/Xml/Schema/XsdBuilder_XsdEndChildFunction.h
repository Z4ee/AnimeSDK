#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class XsdBuilder; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B99AB40)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B99AB70)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B99A640)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99A630)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_XsdEndChildFunction_TypeDefinitionIndex = 2224;

	class XsdBuilder_XsdEndChildFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XsdBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_INVOKE_OFFSET))(this, builder);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XsdBuilder* builder, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XsdBuilder*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_BEGININVOKE_OFFSET))(this, builder, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_XSDENDCHILDFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
