#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpStatusCode_TypeDefinitionIndex = 3606;

	enum class SmtpStatusCode : ::System::Int32
	{
		BadCommandSequence = 503,
		CannotVerifyUserWillAttemptDelivery = 252,
		ClientNotPermitted = 454,
		CommandNotImplemented = 502,
		CommandParameterNotImplemented = 504,
		CommandUnrecognized = 500,
		ExceededStorageAllocation = 552,
		GeneralFailure = -1,
		HelpMessage = 214,
		InsufficientStorage = 452,
		LocalErrorInProcessing = 451,
		MailboxBusy = 450,
		MailboxNameNotAllowed = 553,
		MailboxUnavailable = 550,
		Ok = 250,
		ServiceClosingTransmissionChannel = 221,
		ServiceNotAvailable = 421,
		ServiceReady = 220,
		StartMailInput = 354,
		SyntaxError = 501,
		SystemStatus = 211,
		TransactionFailed = 554,
		UserNotLocalTryAlternatePath = 551,
		UserNotLocalWillForward = 251,
		MustIssueStartTlsFirst = 530,
	};
}
