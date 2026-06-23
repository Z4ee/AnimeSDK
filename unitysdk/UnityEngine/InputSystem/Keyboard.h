#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/IMECompositionString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem::Controls { class AnyKeyControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class KeyControl; }

#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1D79EEB0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x1D79ED20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7A1080)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D79FCA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1D79F9D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F990)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x1D79F120)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F240)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F670)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET UNITYSDK_OFFSET(0x1D79F300)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET UNITYSDK_OFFSET(0x1D79F310)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET UNITYSDK_OFFSET(0x1D79F270)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET UNITYSDK_OFFSET(0x1D79F610)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x1D79F970)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D79FA00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET UNITYSDK_OFFSET(0x1D79F520)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET UNITYSDK_OFFSET(0x1D79F490)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET UNITYSDK_OFFSET(0x1D79F4F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET UNITYSDK_OFFSET(0x1D79F500)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET UNITYSDK_OFFSET(0x1D79F510)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET UNITYSDK_OFFSET(0x1D79F320)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET UNITYSDK_OFFSET(0x1D79F660)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET UNITYSDK_OFFSET(0x1D79F330)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET UNITYSDK_OFFSET(0x1D79F220)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F620)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET UNITYSDK_OFFSET(0x1D79F840)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET UNITYSDK_OFFSET(0x1D79F850)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET UNITYSDK_OFFSET(0x1D79F860)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET UNITYSDK_OFFSET(0x1D79F870)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET UNITYSDK_OFFSET(0x1D79F880)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET UNITYSDK_OFFSET(0x1D79F890)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET UNITYSDK_OFFSET(0x1D79F8C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET UNITYSDK_OFFSET(0x1D79F340)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET UNITYSDK_OFFSET(0x1D79F350)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET UNITYSDK_OFFSET(0x1D79F360)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET UNITYSDK_OFFSET(0x1D79F370)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x1D79F9B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D79F150)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET UNITYSDK_OFFSET(0x1D79F380)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D79F0D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D7A1240)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET UNITYSDK_OFFSET(0x1D79F390)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F550)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1D79F630)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x1D79F570)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET UNITYSDK_OFFSET(0x1D79F590)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F530)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1D79F700)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET UNITYSDK_OFFSET(0x1D79F7F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET UNITYSDK_OFFSET(0x1D79F800)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET UNITYSDK_OFFSET(0x1D79F810)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET UNITYSDK_OFFSET(0x1D79F820)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET UNITYSDK_OFFSET(0x1D79F830)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F740)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET UNITYSDK_OFFSET(0x1D79F730)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F790)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F760)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET UNITYSDK_OFFSET(0x1D79F750)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET UNITYSDK_OFFSET(0x1D79F780)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F770)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET UNITYSDK_OFFSET(0x1D79F900)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET UNITYSDK_OFFSET(0x1D79F910)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET UNITYSDK_OFFSET(0x1D79F920)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET UNITYSDK_OFFSET(0x1D79F930)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET UNITYSDK_OFFSET(0x1D79F940)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET UNITYSDK_OFFSET(0x1D79F680)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET UNITYSDK_OFFSET(0x1D79F690)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F720)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET UNITYSDK_OFFSET(0x1D79F280)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET UNITYSDK_OFFSET(0x1D79F710)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET UNITYSDK_OFFSET(0x1D79F3F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F250)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F560)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1D79F640)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x1D79F2C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x1D79F600)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x1D79F580)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F540)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x1D79F5C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET UNITYSDK_OFFSET(0x1D79F400)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1D79F6F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET UNITYSDK_OFFSET(0x1D79F260)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F950)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET UNITYSDK_OFFSET(0x1D79F410)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET UNITYSDK_OFFSET(0x1D79F290)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET UNITYSDK_OFFSET(0x1D79F140)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET UNITYSDK_OFFSET(0x1D79F230)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET UNITYSDK_OFFSET(0x1D79F420)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET UNITYSDK_OFFSET(0x1D79F430)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET UNITYSDK_OFFSET(0x1D79F650)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET UNITYSDK_OFFSET(0x1D79F440)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET UNITYSDK_OFFSET(0x1D79F450)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET UNITYSDK_OFFSET(0x1D79F460)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET UNITYSDK_OFFSET(0x1D79F470)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET UNITYSDK_OFFSET(0x1D79F480)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1D79FAC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7A1180)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1D79FB70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x1D7A0FF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x1D7A0F10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1D79EFF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x1D79EE60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x1D79F080)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET UNITYSDK_OFFSET(0x1D79F040)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F9A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x1D79F130)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x1D79F980)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D79FA60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x1D79F9C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D79F110)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D7A1250)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x1D79F960)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1290)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1260)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Keyboard_TypeDefinitionIndex = 31633;

	class Keyboard : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Keyboard** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Keyboard**)Il2CppClass::FromTypeDefinitionIndex(Keyboard_TypeDefinitionIndex)->GetStaticField(0x26460);
		}
		static ::System::Boolean* StaticGet_dotUseException()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Keyboard_TypeDefinitionIndex)->GetStaticField(0x7D70);
		}
		// static const ::System::Int32 KeyCount = 0x6E; // 0x0
		::UnityEngine::InputSystem::Controls::ButtonControl* _shiftKey_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> m_ImeCompositionListeners; // 0x160
		::UnityEngine::InputSystem::Controls::ButtonControl* _ctrlKey_k__BackingField; // 0x178
		::UnityEngine::InputSystem::Controls::AnyKeyControl* _anyKey_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _imeSelected_k__BackingField; // 0x188
		::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* m_Keys; // 0x190
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::System::Char>*> m_TextInputListeners; // 0x198
		::System::String* m_KeyboardLayoutName; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _altKey_k__BackingField; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD__CCTOR_OFFSET))();
		}

		::System::Void add_onTextInput(::System::Action_1<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET))(this, value);
		}

		::System::Void remove_onTextInput(::System::Action_1<::System::Char>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET))(this, value);
		}

		::System::Void add_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET))(this, value);
		}

		::System::Void SetIMEEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetIMECursorPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET))(this, position);
		}

		::System::String* get_keyboardLayout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET))(this);
		}

		::System::Void set_keyboardLayout(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AnyKeyControl* get_anyKey()
		{
			return ((::UnityEngine::InputSystem::Controls::AnyKeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET))(this);
		}

		::System::Void set_anyKey(::UnityEngine::InputSystem::Controls::AnyKeyControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AnyKeyControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_spaceKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_enterKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tabKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backquoteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_quoteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_semicolonKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_commaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_periodKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_slashKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backslashKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftBracketKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightBracketKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_minusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_equalsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_aKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_bKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_cKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_dKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_eKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_fKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_gKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_hKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_iKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_jKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_kKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_lKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_mKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_nKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_qKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_sKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_uKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_vKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_wKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_xKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_yKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_zKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit0Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftShiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightShiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAltKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAltKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCtrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCtrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftMetaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightMetaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftWindowsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightWindowsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAppleKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAppleKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCommandKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCommandKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_contextMenuKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_escapeKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_upArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_downArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backspaceKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageDownKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageUpKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_homeKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_endKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_insertKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_deleteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_capsLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_scrollLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_printScreenKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pauseKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEnterKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadDivideKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMultiplyKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMinusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPlusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPeriodKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEqualsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad0Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f10Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f11Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f12Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_shiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET))(this);
		}

		::System::Void set_shiftKey(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_ctrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET))(this);
		}

		::System::Void set_ctrlKey(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_altKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET))(this);
		}

		::System::Void set_altKey(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_imeSelected()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET))(this);
		}

		::System::Void set_imeSelected(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_Item(::UnityEngine::InputSystem::Key key)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET))(this, key);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*> get_allKeys()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Keyboard* get_current()
		{
			return ((::UnityEngine::InputSystem::Keyboard*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Keyboard* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Keyboard*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET))(this);
		}

		::System::Void RefreshConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET))(this);
		}

		::System::Void OnTextInput(::System::Char character)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET))(this, character);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* FindKeyOnCurrentKeyboardLayout(::System::String* displayName)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET))(this, displayName);
		}

		::System::Void OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IMECompositionString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET))(this, compositionString);
		}

		::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET))(this, value);
		}
	};
}
