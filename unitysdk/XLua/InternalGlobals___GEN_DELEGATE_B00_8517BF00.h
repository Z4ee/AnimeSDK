#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class RogueTournAreaDataItem; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D3E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D410)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1D3D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1D2E0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_8517BF00_TypeDefinitionIndex = 50503;

	class InternalGlobals___GEN_DELEGATE_B00_8517BF00 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::RogueTournAreaDataItem* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_8517BF00_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
