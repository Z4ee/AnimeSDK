#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventAction.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventFrameType.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventParamOffset.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ZFDefines_ReportEventType.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENTS_OFFSET UNITYSDK_OFFSET(0x1A6D0870)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENT_OFFSET UNITYSDK_OFFSET(0x1A6D08A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_PARSEEVENTPARAM_OFFSET UNITYSDK_OFFSET(0x1A6D0850)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_REPORTFRAMEPARAM1_OFFSET UNITYSDK_OFFSET(0x1A6D0860)
#define ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D08D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int ZFDefines_TypeDefinitionIndex = 36337;

	class ZFDefines : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 ParseEventParam(::System::Int64 param, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventParamOffset offset)
		{
			return ((::System::Int32(*)(::System::Int64, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventParamOffset))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_PARSEEVENTPARAM_OFFSET))(param, offset);
		}

		static ::System::Int32 ReportFrameParam1(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventAction ea, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventFrameType frameType)
		{
			return ((::System::Int32(*)(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventAction, ::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventFrameType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_REPORTFRAMEPARAM1_OFFSET))(ea, frameType);
		}

		static ::System::Boolean HasReportEvents()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENTS_OFFSET))();
		}

		static ::System::Boolean HasReportEvent(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventType type)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::ZFDefines_ReportEventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_ZFDEFINES_HASREPORTEVENT_OFFSET))(type);
		}
	};
}
