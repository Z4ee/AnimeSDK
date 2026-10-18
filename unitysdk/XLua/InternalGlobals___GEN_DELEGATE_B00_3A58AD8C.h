#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA4A50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA4A80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA4A30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA4940)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_3A58AD8C_TypeDefinitionIndex = 50103;

	class InternalGlobals___GEN_DELEGATE_B00_3A58AD8C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID Invoke(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_3A58AD8C_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
