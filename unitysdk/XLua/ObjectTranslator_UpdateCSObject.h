#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x150763F0)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15076470)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x150763D0)
#define XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15076360)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_UpdateCSObject_TypeDefinitionIndex = 50444;

	class ObjectTranslator_UpdateCSObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::Object* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_UPDATECSOBJECT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
