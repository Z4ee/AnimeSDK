#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE35_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E88C60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE35_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E88CA0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE35_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E88C50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE35__CTOR_OFFSET UNITYSDK_OFFSET(0x12E88B60)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE35_TypeDefinitionIndex = 46951;

	class InternalGlobals___GEN_DELEGATE35 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE35__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Events::UnityEvent_1<::System::Int32>* a1, ::UnityEngine::Events::UnityAction_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent_1<::System::Int32>*, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE35_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Events::UnityEvent_1<::System::Int32>* a1, ::UnityEngine::Events::UnityAction_1<::System::Int32>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Events::UnityEvent_1<::System::Int32>*, ::UnityEngine::Events::UnityAction_1<::System::Int32>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE35_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE35_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
