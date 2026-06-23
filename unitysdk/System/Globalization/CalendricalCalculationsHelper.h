#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Globalization/CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ABERRATION_OFFSET UNITYSDK_OFFSET(0x1CD8C220)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ANGLE_OFFSET UNITYSDK_OFFSET(0x1CD86E00)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASDAYFRACTION_OFFSET UNITYSDK_OFFSET(0x1CD87380)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1CD88C30)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASSEASON_OFFSET UNITYSDK_OFFSET(0x1CD8C9E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_CENTURIESFROM1900_OFFSET UNITYSDK_OFFSET(0x1CD87390)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COMPUTE_OFFSET UNITYSDK_OFFSET(0x1CD8C6C0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COPYSIGN_OFFSET UNITYSDK_OFFSET(0x1CD88150)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COSOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1CD86D20)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_DEFAULTEPHEMERISCORRECTION_OFFSET UNITYSDK_OFFSET(0x1CD87420)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1620TO1699_OFFSET UNITYSDK_OFFSET(0x1CD87A90)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1700TO1799_OFFSET UNITYSDK_OFFSET(0x1CD87900)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1800TO1899_OFFSET UNITYSDK_OFFSET(0x1CD87700)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1900TO1987_OFFSET UNITYSDK_OFFSET(0x1CD87500)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1988TO2019_OFFSET UNITYSDK_OFFSET(0x1CD874E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION_OFFSET UNITYSDK_OFFSET(0x1CD87C20)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EQUATIONOFTIME_OFFSET UNITYSDK_OFFSET(0x1CD88290)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ESTIMATEPRIOR_OFFSET UNITYSDK_OFFSET(0x1CD8CA10)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1CD87110)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETNUMBEROFDAYS_OFFSET UNITYSDK_OFFSET(0x1CD870E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_INITLONGITUDE_OFFSET UNITYSDK_OFFSET(0x1CD88DB0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x1CD880D0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_JULIANCENTURIES_OFFSET UNITYSDK_OFFSET(0x1CD88050)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAYATPERSIANOBSERVATIONSITE_OFFSET UNITYSDK_OFFSET(0x1CD88ED0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAY_OFFSET UNITYSDK_OFFSET(0x1CD88CC0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NORMALIZELONGITUDE_OFFSET UNITYSDK_OFFSET(0x1CD872E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NUTATION_OFFSET UNITYSDK_OFFSET(0x1CD8C320)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_OBLIQUITY_OFFSET UNITYSDK_OFFSET(0x1CD86E30)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERIODICTERM_OFFSET UNITYSDK_OFFSET(0x1CD890D0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERSIANNEWYEARONORBEFORE_OFFSET UNITYSDK_OFFSET(0x1CD8CD20)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_POLYNOMIALSUM_OFFSET UNITYSDK_OFFSET(0x1CD86FC0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_RADIANSFROMDEGREES_OFFSET UNITYSDK_OFFSET(0x1CD86C90)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_REMINDER_OFFSET UNITYSDK_OFFSET(0x1CD872A0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SINOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1CD86CB0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SUMLONGSEQUENCEOFPERIODICTERMS_OFFSET UNITYSDK_OFFSET(0x1CD891E0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_TANOFDEGREE_OFFSET UNITYSDK_OFFSET(0x1CD86D90)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8CED0)
#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8CEC0)

namespace System::Globalization
{
	inline static constexpr unsigned int CalendricalCalculationsHelper_TypeDefinitionIndex = 697;

	class CalendricalCalculationsHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_CoefficientsB()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1330);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_AnomalyCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1338);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_CoefficientsA()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1340);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_EccentricityCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1348);
		}
		static ::Il2CppArray<::System::Globalization::CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap>** StaticGet_EphemerisCorrectionTable()
		{
			return (::Il2CppArray<::System::Globalization::CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1350);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1800to1899()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1358);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1620to1699()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1360);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_LambdaCoefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1368);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1700to1799()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1370);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1378);
		}
		static ::Il2CppArray<::System::Double>** StaticGet_Coefficients1900to1987()
		{
			return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0x1380);
		}
		static ::System::Int64* StaticGet_StartOf1810()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0xCF0);
		}
		static ::System::Int64* StaticGet_StartOf1900Century()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(CalendricalCalculationsHelper_TypeDefinitionIndex)->GetStaticField(0xCF8);
		}
		// static const ::System::Double FullCircleOfArc; // 0x0
		// static const ::System::Int32 HalfCircleOfArc = 0xB4; // 0x0
		// static const ::System::Double TwelveHours; // 0x0
		// static const ::System::Double Noon2000Jan01; // 0x0
		// static const ::System::Double MeanTropicalYearInDays; // 0x0
		// static const ::System::Double MeanSpeedOfSun; // 0x0
		// static const ::System::Double LongitudeSpring; // 0x0
		// static const ::System::Double TwoDegreesAfterSpring; // 0x0
		// static const ::System::Int32 SecondsPerDay = 0x15180; // 0x0
		// static const ::System::Int32 DaysInUniformLengthCentury = 0x8EAD; // 0x0
		// static const ::System::Int32 SecondsPerMinute = 0x3C; // 0x0
		// static const ::System::Int32 MinutesPerDegree = 0x3C; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER__CCTOR_OFFSET))();
		}

		static ::System::Double RadiansFromDegrees(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_RADIANSFROMDEGREES_OFFSET))(degree);
		}

		static ::System::Double SinOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SINOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double CosOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COSOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double TanOfDegree(::System::Double degree)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_TANOFDEGREE_OFFSET))(degree);
		}

		static ::System::Double Angle(::System::Int32 degrees, ::System::Int32 minutes, ::System::Double seconds)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ANGLE_OFFSET))(degrees, minutes, seconds);
		}

		static ::System::Double Obliquity(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_OBLIQUITY_OFFSET))(julianCenturies);
		}

		static ::System::Int64 GetNumberOfDays(::System::DateTime date)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETNUMBEROFDAYS_OFFSET))(date);
		}

		static ::System::Int32 GetGregorianYear(::System::Double numberOfDays)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_GETGREGORIANYEAR_OFFSET))(numberOfDays);
		}

		static ::System::Double Reminder(::System::Double divisor, ::System::Double dividend)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_REMINDER_OFFSET))(divisor, dividend);
		}

		static ::System::Double NormalizeLongitude(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NORMALIZELONGITUDE_OFFSET))(longitude);
		}

		static ::System::Double AsDayFraction(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASDAYFRACTION_OFFSET))(longitude);
		}

		static ::System::Double PolynomialSum(::Il2CppArray<::System::Double>* coefficients, ::System::Double indeterminate)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Double>*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_POLYNOMIALSUM_OFFSET))(coefficients, indeterminate);
		}

		static ::System::Double CenturiesFrom1900(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_CENTURIESFROM1900_OFFSET))(gregorianYear);
		}

		static ::System::Double DefaultEphemerisCorrection(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_DEFAULTEPHEMERISCORRECTION_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1988to2019(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1988TO2019_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1900to1987(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1900TO1987_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1800to1899(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1800TO1899_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1700to1799(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1700TO1799_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection1620to1699(::System::Int32 gregorianYear)
		{
			return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION1620TO1699_OFFSET))(gregorianYear);
		}

		static ::System::Double EphemerisCorrection(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTION_OFFSET))(time);
		}

		static ::System::Double JulianCenturies(::System::Double moment)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_JULIANCENTURIES_OFFSET))(moment);
		}

		static ::System::Boolean IsNegative(::System::Double value)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ISNEGATIVE_OFFSET))(value);
		}

		static ::System::Double CopySign(::System::Double value, ::System::Double sign)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COPYSIGN_OFFSET))(value, sign);
		}

		static ::System::Double EquationOfTime(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EQUATIONOFTIME_OFFSET))(time);
		}

		static ::System::Double AsLocalTime(::System::Double apparentMidday, ::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASLOCALTIME_OFFSET))(apparentMidday, longitude);
		}

		static ::System::Double Midday(::System::Double date, ::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAY_OFFSET))(date, longitude);
		}

		static ::System::Double InitLongitude(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_INITLONGITUDE_OFFSET))(longitude);
		}

		static ::System::Double MiddayAtPersianObservationSite(::System::Double date)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_MIDDAYATPERSIANOBSERVATIONSITE_OFFSET))(date);
		}

		static ::System::Double PeriodicTerm(::System::Double julianCenturies, ::System::Int32 x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERIODICTERM_OFFSET))(julianCenturies, x, y, z);
		}

		static ::System::Double SumLongSequenceOfPeriodicTerms(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_SUMLONGSEQUENCEOFPERIODICTERMS_OFFSET))(julianCenturies);
		}

		static ::System::Double Aberration(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ABERRATION_OFFSET))(julianCenturies);
		}

		static ::System::Double Nutation(::System::Double julianCenturies)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_NUTATION_OFFSET))(julianCenturies);
		}

		static ::System::Double Compute(::System::Double time)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_COMPUTE_OFFSET))(time);
		}

		static ::System::Double AsSeason(::System::Double longitude)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ASSEASON_OFFSET))(longitude);
		}

		static ::System::Double EstimatePrior(::System::Double longitude, ::System::Double time)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_ESTIMATEPRIOR_OFFSET))(longitude, time);
		}

		static ::System::Int64 PersianNewYearOnOrBefore(::System::Int64 numberOfDays)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_PERSIANNEWYEARONORBEFORE_OFFSET))(numberOfDays);
		}
	};
}
