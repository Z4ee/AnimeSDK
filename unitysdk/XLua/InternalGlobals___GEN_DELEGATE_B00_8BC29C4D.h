#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IResidentActivityPanelData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D690)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D6C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D680)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1D590)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_8BC29C4D_TypeDefinitionIndex = 50472;

	class InternalGlobals___GEN_DELEGATE_B00_8BC29C4D : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IResidentActivityPanelData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8BC29C4D_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
