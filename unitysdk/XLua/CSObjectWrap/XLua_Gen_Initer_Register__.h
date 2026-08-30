#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0x14876C30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_00_OFFSET UNITYSDK_OFFSET(0x14A34050)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_01_OFFSET UNITYSDK_OFFSET(0x14A34060)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_02_OFFSET UNITYSDK_OFFSET(0x14A34070)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_03_OFFSET UNITYSDK_OFFSET(0x14A34080)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_04_OFFSET UNITYSDK_OFFSET(0x14A34180)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_05_OFFSET UNITYSDK_OFFSET(0x14A34190)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_06_OFFSET UNITYSDK_OFFSET(0x14A341A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_07_OFFSET UNITYSDK_OFFSET(0x14A341B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_08_OFFSET UNITYSDK_OFFSET(0x14A341C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_09_OFFSET UNITYSDK_OFFSET(0x14A342C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_10_OFFSET UNITYSDK_OFFSET(0x14A342D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_11_OFFSET UNITYSDK_OFFSET(0x14A343D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_12_OFFSET UNITYSDK_OFFSET(0x14A344D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_13_OFFSET UNITYSDK_OFFSET(0x14A344E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_14_OFFSET UNITYSDK_OFFSET(0x14A344F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_15_OFFSET UNITYSDK_OFFSET(0x14A34500)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_16_OFFSET UNITYSDK_OFFSET(0x14A34510)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_17_OFFSET UNITYSDK_OFFSET(0x14A34520)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_18_OFFSET UNITYSDK_OFFSET(0x14A34530)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_19_OFFSET UNITYSDK_OFFSET(0x14A34540)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_20_OFFSET UNITYSDK_OFFSET(0x14A34550)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_21_OFFSET UNITYSDK_OFFSET(0x14A34650)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_22_OFFSET UNITYSDK_OFFSET(0x14A34660)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_23_OFFSET UNITYSDK_OFFSET(0x14A34670)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_24_OFFSET UNITYSDK_OFFSET(0x14A34680)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_25_OFFSET UNITYSDK_OFFSET(0x14A34690)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_26_OFFSET UNITYSDK_OFFSET(0x14A346A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_27_OFFSET UNITYSDK_OFFSET(0x14A347A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_28_OFFSET UNITYSDK_OFFSET(0x14A348A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_29_OFFSET UNITYSDK_OFFSET(0x14A34A90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_30_OFFSET UNITYSDK_OFFSET(0x14A34AA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INTERFACEINIT_31_OFFSET UNITYSDK_OFFSET(0x14A34AB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_00_OFFSET UNITYSDK_OFFSET(0x148773D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_01_OFFSET UNITYSDK_OFFSET(0x14886610)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_02_OFFSET UNITYSDK_OFFSET(0x14896880)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_03_OFFSET UNITYSDK_OFFSET(0x148A4720)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_04_OFFSET UNITYSDK_OFFSET(0x148B2C30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_05_OFFSET UNITYSDK_OFFSET(0x148BF760)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_06_OFFSET UNITYSDK_OFFSET(0x148CCAD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_07_OFFSET UNITYSDK_OFFSET(0x148DA400)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_08_OFFSET UNITYSDK_OFFSET(0x148E7D30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_09_OFFSET UNITYSDK_OFFSET(0x148F6D50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_10_OFFSET UNITYSDK_OFFSET(0x14906040)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_11_OFFSET UNITYSDK_OFFSET(0x149143D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_12_OFFSET UNITYSDK_OFFSET(0x149216B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_13_OFFSET UNITYSDK_OFFSET(0x1492E330)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_14_OFFSET UNITYSDK_OFFSET(0x1493CDE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_15_OFFSET UNITYSDK_OFFSET(0x1494ACB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_16_OFFSET UNITYSDK_OFFSET(0x149585C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_17_OFFSET UNITYSDK_OFFSET(0x149667E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_18_OFFSET UNITYSDK_OFFSET(0x149741A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_19_OFFSET UNITYSDK_OFFSET(0x14981730)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_20_OFFSET UNITYSDK_OFFSET(0x14990130)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_21_OFFSET UNITYSDK_OFFSET(0x1499CAE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_22_OFFSET UNITYSDK_OFFSET(0x149ABC90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_23_OFFSET UNITYSDK_OFFSET(0x149BA230)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_24_OFFSET UNITYSDK_OFFSET(0x149C8020)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_25_OFFSET UNITYSDK_OFFSET(0x149D4E00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_26_OFFSET UNITYSDK_OFFSET(0x149E2870)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_27_OFFSET UNITYSDK_OFFSET(0x149F1190)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_28_OFFSET UNITYSDK_OFFSET(0x149FE940)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_29_OFFSET UNITYSDK_OFFSET(0x14A0BCB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_30_OFFSET UNITYSDK_OFFSET(0x14A18F70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT_31_OFFSET UNITYSDK_OFFSET(0x14A267D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET UNITYSDK_OFFSET(0x14A34AC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET UNITYSDK_OFFSET(0x14A34B30)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 51997;

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
