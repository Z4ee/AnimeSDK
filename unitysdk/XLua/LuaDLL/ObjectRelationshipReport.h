#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/XLua/LuaDLL/RelationshipType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11231690)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11231790)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11231210)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x112311F0)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int ObjectRelationshipReport_TypeDefinitionIndex = 47768;

	class ObjectRelationshipReport : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr parent, ::System::IntPtr child, ::XLua::LuaDLL::RelationshipType type, ::System::String* key, ::System::Double d, ::System::String* key2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_INVOKE_OFFSET))(this, parent, child, type, key, d, key2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr parent, ::System::IntPtr child, ::XLua::LuaDLL::RelationshipType type, ::System::String* key, ::System::Double d, ::System::String* key2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_BEGININVOKE_OFFSET))(this, parent, child, type, key, d, key2, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
