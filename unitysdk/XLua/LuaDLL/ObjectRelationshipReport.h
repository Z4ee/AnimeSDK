#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/XLua/LuaDLL/RelationshipType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1185F410)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1185F510)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1185F3C0)
#define XLUA_LUADLL_OBJECTRELATIONSHIPREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1185F350)

namespace XLua::LuaDLL
{
	inline static constexpr unsigned int ObjectRelationshipReport_TypeDefinitionIndex = 52000;

	class ObjectRelationshipReport : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::XLua::LuaDLL::RelationshipType a3, ::System::String* a4, ::System::Double a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::XLua::LuaDLL::RelationshipType a3, ::System::String* a4, ::System::Double a5, ::System::String* a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_LUADLL_OBJECTRELATIONSHIPREPORT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
