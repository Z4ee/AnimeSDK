#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IResidentActivityPanelData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11214E30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11214E60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE1_INVOKE_OFFSET UNITYSDK_OFFSET(0x112148D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE1__CTOR_OFFSET UNITYSDK_OFFSET(0x11212B20)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE1_TypeDefinitionIndex = 46327;

	class InternalGlobals___GEN_DELEGATE1 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE1__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::IResidentActivityPanelData* panelData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE1_INVOKE_OFFSET))(this, panelData);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IResidentActivityPanelData* panelData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE1_BEGININVOKE_OFFSET))(this, panelData, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE1_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
