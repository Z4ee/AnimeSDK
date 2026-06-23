#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Xml::Schema { class XdrBuilder; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D2D1E70)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2D1EB0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D2D18F0)
#define SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D18D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_XdrInitFunction_TypeDefinitionIndex = 2104;

	class XdrBuilder_XdrInitFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_INVOKE_OFFSET))(this, builder, obj);
		}

		::System::IAsyncResult* BeginInvoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_BEGININVOKE_OFFSET))(this, builder, obj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_XDRINITFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
