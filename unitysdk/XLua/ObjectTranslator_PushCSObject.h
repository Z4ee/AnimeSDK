#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1331D130)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1331D1A0)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1331D120)
#define XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1331D0B0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_PushCSObject_TypeDefinitionIndex = 46895;

	class ObjectTranslator_PushCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_PUSHCSOBJECT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
