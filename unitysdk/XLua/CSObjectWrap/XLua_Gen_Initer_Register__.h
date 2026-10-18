#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0x14AF35A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET UNITYSDK_OFFSET(0x14CBF290)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET UNITYSDK_OFFSET(0x14CBF2A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET UNITYSDK_OFFSET(0x14CBF2B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET UNITYSDK_OFFSET(0x14CBF2C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET UNITYSDK_OFFSET(0x14CBF3C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET UNITYSDK_OFFSET(0x14CBF3D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET UNITYSDK_OFFSET(0x14CBF3E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET UNITYSDK_OFFSET(0x14CBF3F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET UNITYSDK_OFFSET(0x14CBF400)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET UNITYSDK_OFFSET(0x14CBF410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET UNITYSDK_OFFSET(0x14CBF420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET UNITYSDK_OFFSET(0x14CBF600)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET UNITYSDK_OFFSET(0x14CBF700)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET UNITYSDK_OFFSET(0x14CBF710)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET UNITYSDK_OFFSET(0x14CBF720)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET UNITYSDK_OFFSET(0x14CBF730)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET UNITYSDK_OFFSET(0x14CBF740)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET UNITYSDK_OFFSET(0x14CBF750)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET UNITYSDK_OFFSET(0x14CBF760)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET UNITYSDK_OFFSET(0x14CBF770)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET UNITYSDK_OFFSET(0x14CBF780)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET UNITYSDK_OFFSET(0x14CBF880)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET UNITYSDK_OFFSET(0x14CBF890)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET UNITYSDK_OFFSET(0x14CBF8A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET UNITYSDK_OFFSET(0x14CBF8B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET UNITYSDK_OFFSET(0x14CBF8C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET UNITYSDK_OFFSET(0x14CBF8D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET UNITYSDK_OFFSET(0x14CBF9D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET UNITYSDK_OFFSET(0x14CBFBB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET UNITYSDK_OFFSET(0x14CBFCB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET UNITYSDK_OFFSET(0x14CBFCC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET UNITYSDK_OFFSET(0x14CBFCD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET UNITYSDK_OFFSET(0x14AF3B70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET UNITYSDK_OFFSET(0x14B03900)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET UNITYSDK_OFFSET(0x14B14320)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET UNITYSDK_OFFSET(0x14B224B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET UNITYSDK_OFFSET(0x14B30FF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET UNITYSDK_OFFSET(0x14B3E0C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET UNITYSDK_OFFSET(0x14B4B9F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET UNITYSDK_OFFSET(0x14B59AD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET UNITYSDK_OFFSET(0x14B67CF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET UNITYSDK_OFFSET(0x14B77650)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET UNITYSDK_OFFSET(0x14B86FB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET UNITYSDK_OFFSET(0x14B95980)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET UNITYSDK_OFFSET(0x14BA34B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET UNITYSDK_OFFSET(0x14BB0820)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET UNITYSDK_OFFSET(0x14BBFA60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET UNITYSDK_OFFSET(0x14BCDF70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET UNITYSDK_OFFSET(0x14BDC6A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET UNITYSDK_OFFSET(0x14BEAB90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET UNITYSDK_OFFSET(0x14BF8AF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET UNITYSDK_OFFSET(0x14C06900)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET UNITYSDK_OFFSET(0x14C15D50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET UNITYSDK_OFFSET(0x14C22BE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET UNITYSDK_OFFSET(0x14C32540)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET UNITYSDK_OFFSET(0x14C41420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET UNITYSDK_OFFSET(0x14C4F860)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET UNITYSDK_OFFSET(0x14C5CA90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET UNITYSDK_OFFSET(0x14C6AD90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET UNITYSDK_OFFSET(0x14C79E90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET UNITYSDK_OFFSET(0x14C87DF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET UNITYSDK_OFFSET(0x14C95700)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET UNITYSDK_OFFSET(0x14CA3390)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET UNITYSDK_OFFSET(0x14CB13C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET UNITYSDK_OFFSET(0x14CBFCE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET UNITYSDK_OFFSET(0x14CBFD50)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 51702;

	class XLua_Gen_Initer_Register__ : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET))(this);
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_08(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_09(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_10(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_11(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_12(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_13(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_14(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_15(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_16(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_17(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_18(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_19(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_20(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_21(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_22(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_23(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_24(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_25(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_26(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_27(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_28(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_29(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_30(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET))(a1, a2);
		}

		static ::System::Void WrapInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET))(a1, a2);
		}

		static ::System::Void InterfaceInit_31(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET))(a1, a2);
		}
	};
}
