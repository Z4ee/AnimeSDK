#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Keyboard.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class AnyKeyControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class DiscreteButtonControl; }
namespace UnityEngine::InputSystem::Controls { class KeyControl; }

#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD0_OFFSET UNITYSDK_OFFSET(0x1E0D4C20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD1_OFFSET UNITYSDK_OFFSET(0x1E0D3630)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD2_OFFSET UNITYSDK_OFFSET(0x1E0D38A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD3_OFFSET UNITYSDK_OFFSET(0x1E0D3B10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD4_OFFSET UNITYSDK_OFFSET(0x1E0D3D80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD5_OFFSET UNITYSDK_OFFSET(0x1E0D3FF0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD6_OFFSET UNITYSDK_OFFSET(0x1E0D4260)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD7_OFFSET UNITYSDK_OFFSET(0x1E0D44D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD8_OFFSET UNITYSDK_OFFSET(0x1E0D4740)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD9_OFFSET UNITYSDK_OFFSET(0x1E0D49B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDALT_OFFSET UNITYSDK_OFFSET(0x1E0D5BE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDANYKEY_OFFSET UNITYSDK_OFFSET(0x1E0CC6E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDA_OFFSET UNITYSDK_OFFSET(0x1E0CF6D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKQUOTE_OFFSET UNITYSDK_OFFSET(0x1E0CD240)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSLASH_OFFSET UNITYSDK_OFFSET(0x1E0CE0E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSPACE_OFFSET UNITYSDK_OFFSET(0x1E0D6ED0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDB_OFFSET UNITYSDK_OFFSET(0x1E0CF940)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCAPSLOCK_OFFSET UNITYSDK_OFFSET(0x1E0D7FE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCOMMA_OFFSET UNITYSDK_OFFSET(0x1E0CD990)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCONTEXTMENU_OFFSET UNITYSDK_OFFSET(0x1E0D6C40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCTRL_OFFSET UNITYSDK_OFFSET(0x1E0D6400)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDC_OFFSET UNITYSDK_OFFSET(0x1E0CFBB0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDELETE_OFFSET UNITYSDK_OFFSET(0x1E0D7D70)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDOWNARROW_OFFSET UNITYSDK_OFFSET(0x1E0CEF80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDD_OFFSET UNITYSDK_OFFSET(0x1E0CFE20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEND_OFFSET UNITYSDK_OFFSET(0x1E0D7890)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDENTER_OFFSET UNITYSDK_OFFSET(0x1E0CCD40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CEAA0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDESCAPE_OFFSET UNITYSDK_OFFSET(0x1E0CC840)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDE_OFFSET UNITYSDK_OFFSET(0x1E0D0090)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF10_OFFSET UNITYSDK_OFFSET(0x1E0DCB70)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF11_OFFSET UNITYSDK_OFFSET(0x1E0DCDE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF12_OFFSET UNITYSDK_OFFSET(0x1E0DD050)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF1_OFFSET UNITYSDK_OFFSET(0x1E0DB580)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF2_OFFSET UNITYSDK_OFFSET(0x1E0DB7F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF3_OFFSET UNITYSDK_OFFSET(0x1E0DBA60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF4_OFFSET UNITYSDK_OFFSET(0x1E0DBCD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF5_OFFSET UNITYSDK_OFFSET(0x1E0DBF40)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF6_OFFSET UNITYSDK_OFFSET(0x1E0DC1B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF7_OFFSET UNITYSDK_OFFSET(0x1E0DC420)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF8_OFFSET UNITYSDK_OFFSET(0x1E0DC690)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF9_OFFSET UNITYSDK_OFFSET(0x1E0DC900)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF_OFFSET UNITYSDK_OFFSET(0x1E0D0300)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDG_OFFSET UNITYSDK_OFFSET(0x1E0D0570)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDHOME_OFFSET UNITYSDK_OFFSET(0x1E0D7620)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDH_OFFSET UNITYSDK_OFFSET(0x1E0D07E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDIMESELECTED_OFFSET UNITYSDK_OFFSET(0x1E0DDEF0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDINSERT_OFFSET UNITYSDK_OFFSET(0x1E0D7B00)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDI_OFFSET UNITYSDK_OFFSET(0x1E0D0A50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDJ_OFFSET UNITYSDK_OFFSET(0x1E0D0CC0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDK_OFFSET UNITYSDK_OFFSET(0x1E0D0F30)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTALT_OFFSET UNITYSDK_OFFSET(0x1E0D56B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTARROW_OFFSET UNITYSDK_OFFSET(0x1E0CF1F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTBRACKET_OFFSET UNITYSDK_OFFSET(0x1E0CE350)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTCTRL_OFFSET UNITYSDK_OFFSET(0x1E0D5EE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTMETA_OFFSET UNITYSDK_OFFSET(0x1E0D6700)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E0D4E90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDL_OFFSET UNITYSDK_OFFSET(0x1E0D11A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDMINUS_OFFSET UNITYSDK_OFFSET(0x1E0CE830)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDM_OFFSET UNITYSDK_OFFSET(0x1E0D1410)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMLOCK_OFFSET UNITYSDK_OFFSET(0x1E0D8250)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD0_OFFSET UNITYSDK_OFFSET(0x1E0DB310)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD1_OFFSET UNITYSDK_OFFSET(0x1E0D9D20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD2_OFFSET UNITYSDK_OFFSET(0x1E0D9F90)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD3_OFFSET UNITYSDK_OFFSET(0x1E0DA200)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD4_OFFSET UNITYSDK_OFFSET(0x1E0DA470)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD5_OFFSET UNITYSDK_OFFSET(0x1E0DA6E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD6_OFFSET UNITYSDK_OFFSET(0x1E0DA950)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD7_OFFSET UNITYSDK_OFFSET(0x1E0DABC0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD8_OFFSET UNITYSDK_OFFSET(0x1E0DAE30)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD9_OFFSET UNITYSDK_OFFSET(0x1E0DB0A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADDIVIDE_OFFSET UNITYSDK_OFFSET(0x1E0D8E80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADENTER_OFFSET UNITYSDK_OFFSET(0x1E0D8C10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADEQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D9AB0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMINUS_OFFSET UNITYSDK_OFFSET(0x1E0D95D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E0D90F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPERIOD_OFFSET UNITYSDK_OFFSET(0x1E0D9840)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPLUS_OFFSET UNITYSDK_OFFSET(0x1E0D9360)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDN_OFFSET UNITYSDK_OFFSET(0x1E0D1680)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM1_OFFSET UNITYSDK_OFFSET(0x1E0DD2C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM2_OFFSET UNITYSDK_OFFSET(0x1E0DD530)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM3_OFFSET UNITYSDK_OFFSET(0x1E0DD7A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM4_OFFSET UNITYSDK_OFFSET(0x1E0DDA10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM5_OFFSET UNITYSDK_OFFSET(0x1E0DDC80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDO_OFFSET UNITYSDK_OFFSET(0x1E0D18F0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEDOWN_OFFSET UNITYSDK_OFFSET(0x1E0D7140)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEUP_OFFSET UNITYSDK_OFFSET(0x1E0D73B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAUSE_OFFSET UNITYSDK_OFFSET(0x1E0D89A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPERIOD_OFFSET UNITYSDK_OFFSET(0x1E0CDC00)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPRINTSCREEN_OFFSET UNITYSDK_OFFSET(0x1E0D84C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDP_OFFSET UNITYSDK_OFFSET(0x1E0D1B60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQUOTE_OFFSET UNITYSDK_OFFSET(0x1E0CD4B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQ_OFFSET UNITYSDK_OFFSET(0x1E0D1DD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTALT_OFFSET UNITYSDK_OFFSET(0x1E0D5940)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTARROW_OFFSET UNITYSDK_OFFSET(0x1E0CF460)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTBRACKET_OFFSET UNITYSDK_OFFSET(0x1E0CE5C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTCTRL_OFFSET UNITYSDK_OFFSET(0x1E0D6170)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTMETA_OFFSET UNITYSDK_OFFSET(0x1E0D69A0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E0D5120)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDR_OFFSET UNITYSDK_OFFSET(0x1E0D2040)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSCROLLLOCK_OFFSET UNITYSDK_OFFSET(0x1E0D8730)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSEMICOLON_OFFSET UNITYSDK_OFFSET(0x1E0CD720)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSHIFT_OFFSET UNITYSDK_OFFSET(0x1E0D53B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSLASH_OFFSET UNITYSDK_OFFSET(0x1E0CDE70)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSPACE_OFFSET UNITYSDK_OFFSET(0x1E0CCAD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDS_OFFSET UNITYSDK_OFFSET(0x1E0D22B0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDTAB_OFFSET UNITYSDK_OFFSET(0x1E0CCFD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDT_OFFSET UNITYSDK_OFFSET(0x1E0D2520)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDUPARROW_OFFSET UNITYSDK_OFFSET(0x1E0CED10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDU_OFFSET UNITYSDK_OFFSET(0x1E0D2790)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDV_OFFSET UNITYSDK_OFFSET(0x1E0D2A00)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDW_OFFSET UNITYSDK_OFFSET(0x1E0D2C70)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDX_OFFSET UNITYSDK_OFFSET(0x1E0D2EE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDY_OFFSET UNITYSDK_OFFSET(0x1E0D3150)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDZ_OFFSET UNITYSDK_OFFSET(0x1E0D33C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6CB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int FastKeyboard_TypeDefinitionIndex = 32258;

	class FastKeyboard : public ::UnityEngine::InputSystem::Keyboard
	{
	public:
		// static const ::System::String* metadata; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AnyKeyControl* Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString kAnyKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::AnyKeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDANYKEY_OFFSET))(this, kAnyKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDESCAPE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSPACE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDENTER_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDTAB_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKQUOTE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQUOTE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSEMICOLON_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCOMMA_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPERIOD_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSLASH_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSLASH_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTBRACKET_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTBRACKET_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDMINUS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEQUALS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDUPARROW_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDOWNARROW_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTARROW_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTARROW_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDA_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDB_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDC_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDD_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDG_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDH_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDI_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDJ_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDK_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDL_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDM_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDN_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDO_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDP_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQ_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDR_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDU_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDV_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDW_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDX_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDY_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDZ_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD1_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD2_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD3_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD4_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD5_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD6_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD7_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD8_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD9_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD0_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTSHIFT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTSHIFT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSHIFT_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTALT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTALT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDALT_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTCTRL_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTCTRL_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::DiscreteButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCTRL_OFFSET))(this, kDiscreteButtonLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTMETA_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTMETA_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCONTEXTMENU_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSPACE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEDOWN_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEUP_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDHOME_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEND_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDINSERT_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDELETE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCAPSLOCK_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMLOCK_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPRINTSCREEN_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSCROLLLOCK_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAUSE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADENTER_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADDIVIDE_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMULTIPLY_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPLUS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMINUS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPERIOD_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADEQUALS_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD1_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD2_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD3_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD4_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD5_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD6_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD7_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD8_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD9_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD0_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF1_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF2_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF3_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF4_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF5_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF6_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF7_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF8_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF9_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF10_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF11_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF12_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM1_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM2_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM3_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM4_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString kKeyLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM5_OFFSET))(this, kKeyLayout, parent);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDIMESELECTED_OFFSET))(this, kButtonLayout, parent);
		}
	};
}
