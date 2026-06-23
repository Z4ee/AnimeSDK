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

#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD0_OFFSET UNITYSDK_OFFSET(0x1CD1B060)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD1_OFFSET UNITYSDK_OFFSET(0x1CD199E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD2_OFFSET UNITYSDK_OFFSET(0x1CD19C60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD3_OFFSET UNITYSDK_OFFSET(0x1CD19EE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD4_OFFSET UNITYSDK_OFFSET(0x1CD1A160)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD5_OFFSET UNITYSDK_OFFSET(0x1CD1A3E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD6_OFFSET UNITYSDK_OFFSET(0x1CD1A660)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD7_OFFSET UNITYSDK_OFFSET(0x1CD1A8E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD8_OFFSET UNITYSDK_OFFSET(0x1CD1AB60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARD9_OFFSET UNITYSDK_OFFSET(0x1CD1ADE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDALT_OFFSET UNITYSDK_OFFSET(0x1CD1C040)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDANYKEY_OFFSET UNITYSDK_OFFSET(0x1CD127D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDA_OFFSET UNITYSDK_OFFSET(0x1CD158E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKQUOTE_OFFSET UNITYSDK_OFFSET(0x1CD13360)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSLASH_OFFSET UNITYSDK_OFFSET(0x1CD14260)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDBACKSPACE_OFFSET UNITYSDK_OFFSET(0x1CD1D350)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDB_OFFSET UNITYSDK_OFFSET(0x1CD15B60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCAPSLOCK_OFFSET UNITYSDK_OFFSET(0x1CD1E4D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCOMMA_OFFSET UNITYSDK_OFFSET(0x1CD13AE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCONTEXTMENU_OFFSET UNITYSDK_OFFSET(0x1CD1D0C0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDCTRL_OFFSET UNITYSDK_OFFSET(0x1CD1C870)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDC_OFFSET UNITYSDK_OFFSET(0x1CD15DE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDELETE_OFFSET UNITYSDK_OFFSET(0x1CD1E250)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDDOWNARROW_OFFSET UNITYSDK_OFFSET(0x1CD15160)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDD_OFFSET UNITYSDK_OFFSET(0x1CD16060)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEND_OFFSET UNITYSDK_OFFSET(0x1CD1DD50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDENTER_OFFSET UNITYSDK_OFFSET(0x1CD12E50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDEQUALS_OFFSET UNITYSDK_OFFSET(0x1CD14C60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDESCAPE_OFFSET UNITYSDK_OFFSET(0x1CD12940)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDE_OFFSET UNITYSDK_OFFSET(0x1CD162E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF10_OFFSET UNITYSDK_OFFSET(0x1CD23250)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF11_OFFSET UNITYSDK_OFFSET(0x1CD234D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF12_OFFSET UNITYSDK_OFFSET(0x1CD23750)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF1_OFFSET UNITYSDK_OFFSET(0x1CD21BD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF2_OFFSET UNITYSDK_OFFSET(0x1CD21E50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF3_OFFSET UNITYSDK_OFFSET(0x1CD220D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF4_OFFSET UNITYSDK_OFFSET(0x1CD22350)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF5_OFFSET UNITYSDK_OFFSET(0x1CD225D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF6_OFFSET UNITYSDK_OFFSET(0x1CD22850)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF7_OFFSET UNITYSDK_OFFSET(0x1CD22AD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF8_OFFSET UNITYSDK_OFFSET(0x1CD22D50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF9_OFFSET UNITYSDK_OFFSET(0x1CD22FD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDF_OFFSET UNITYSDK_OFFSET(0x1CD16560)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDG_OFFSET UNITYSDK_OFFSET(0x1CD167E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDHOME_OFFSET UNITYSDK_OFFSET(0x1CD1DAD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDH_OFFSET UNITYSDK_OFFSET(0x1CD16A60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDIMESELECTED_OFFSET UNITYSDK_OFFSET(0x1CD24650)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDINSERT_OFFSET UNITYSDK_OFFSET(0x1CD1DFD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDI_OFFSET UNITYSDK_OFFSET(0x1CD16CE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDJ_OFFSET UNITYSDK_OFFSET(0x1CD16F60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDK_OFFSET UNITYSDK_OFFSET(0x1CD171E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTALT_OFFSET UNITYSDK_OFFSET(0x1CD1BB10)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTARROW_OFFSET UNITYSDK_OFFSET(0x1CD153E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTBRACKET_OFFSET UNITYSDK_OFFSET(0x1CD144E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTCTRL_OFFSET UNITYSDK_OFFSET(0x1CD1C350)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTMETA_OFFSET UNITYSDK_OFFSET(0x1CD1CB80)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDLEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1CD1B2E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDL_OFFSET UNITYSDK_OFFSET(0x1CD17460)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDMINUS_OFFSET UNITYSDK_OFFSET(0x1CD149E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDM_OFFSET UNITYSDK_OFFSET(0x1CD176E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMLOCK_OFFSET UNITYSDK_OFFSET(0x1CD1E750)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD0_OFFSET UNITYSDK_OFFSET(0x1CD21950)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD1_OFFSET UNITYSDK_OFFSET(0x1CD202D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD2_OFFSET UNITYSDK_OFFSET(0x1CD20550)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD3_OFFSET UNITYSDK_OFFSET(0x1CD207D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD4_OFFSET UNITYSDK_OFFSET(0x1CD20A50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD5_OFFSET UNITYSDK_OFFSET(0x1CD20CD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD6_OFFSET UNITYSDK_OFFSET(0x1CD20F50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD7_OFFSET UNITYSDK_OFFSET(0x1CD211D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD8_OFFSET UNITYSDK_OFFSET(0x1CD21450)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPAD9_OFFSET UNITYSDK_OFFSET(0x1CD216D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADDIVIDE_OFFSET UNITYSDK_OFFSET(0x1CD1F3D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADENTER_OFFSET UNITYSDK_OFFSET(0x1CD1F150)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADEQUALS_OFFSET UNITYSDK_OFFSET(0x1CD20050)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMINUS_OFFSET UNITYSDK_OFFSET(0x1CD1FB50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CD1F650)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPERIOD_OFFSET UNITYSDK_OFFSET(0x1CD1FDD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDNUMPADPLUS_OFFSET UNITYSDK_OFFSET(0x1CD1F8D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDN_OFFSET UNITYSDK_OFFSET(0x1CD17960)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM1_OFFSET UNITYSDK_OFFSET(0x1CD239D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM2_OFFSET UNITYSDK_OFFSET(0x1CD23C50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM3_OFFSET UNITYSDK_OFFSET(0x1CD23ED0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM4_OFFSET UNITYSDK_OFFSET(0x1CD24150)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDOEM5_OFFSET UNITYSDK_OFFSET(0x1CD243D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDO_OFFSET UNITYSDK_OFFSET(0x1CD17BE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEDOWN_OFFSET UNITYSDK_OFFSET(0x1CD1D5D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAGEUP_OFFSET UNITYSDK_OFFSET(0x1CD1D850)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPAUSE_OFFSET UNITYSDK_OFFSET(0x1CD1EED0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPERIOD_OFFSET UNITYSDK_OFFSET(0x1CD13D60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDPRINTSCREEN_OFFSET UNITYSDK_OFFSET(0x1CD1E9D0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDP_OFFSET UNITYSDK_OFFSET(0x1CD17E60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQUOTE_OFFSET UNITYSDK_OFFSET(0x1CD135E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDQ_OFFSET UNITYSDK_OFFSET(0x1CD180E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTALT_OFFSET UNITYSDK_OFFSET(0x1CD1BDA0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTARROW_OFFSET UNITYSDK_OFFSET(0x1CD15660)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTBRACKET_OFFSET UNITYSDK_OFFSET(0x1CD14760)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTCTRL_OFFSET UNITYSDK_OFFSET(0x1CD1C5E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTMETA_OFFSET UNITYSDK_OFFSET(0x1CD1CE20)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDRIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1CD1B570)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDR_OFFSET UNITYSDK_OFFSET(0x1CD18360)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSCROLLLOCK_OFFSET UNITYSDK_OFFSET(0x1CD1EC50)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSEMICOLON_OFFSET UNITYSDK_OFFSET(0x1CD13860)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSHIFT_OFFSET UNITYSDK_OFFSET(0x1CD1B800)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSLASH_OFFSET UNITYSDK_OFFSET(0x1CD13FE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDSPACE_OFFSET UNITYSDK_OFFSET(0x1CD12BD0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDS_OFFSET UNITYSDK_OFFSET(0x1CD185E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDTAB_OFFSET UNITYSDK_OFFSET(0x1CD130E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDT_OFFSET UNITYSDK_OFFSET(0x1CD18860)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDUPARROW_OFFSET UNITYSDK_OFFSET(0x1CD14EE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDU_OFFSET UNITYSDK_OFFSET(0x1CD18AE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDV_OFFSET UNITYSDK_OFFSET(0x1CD18D60)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDW_OFFSET UNITYSDK_OFFSET(0x1CD18FE0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDX_OFFSET UNITYSDK_OFFSET(0x1CD19260)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDY_OFFSET UNITYSDK_OFFSET(0x1CD194E0)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD_INITIALIZE_CTRLKEYBOARDZ_OFFSET UNITYSDK_OFFSET(0x1CD19760)
#define UNITYENGINE_INPUTSYSTEM_FASTKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0CDA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int FastKeyboard_TypeDefinitionIndex = 31638;

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
